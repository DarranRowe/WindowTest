#pragma once

template<typename T, size_t N>
Microsoft::WRL::ComPtr<T> get_activation_factory(const wchar_t(&runtime_class_name)[N])
{
	Microsoft::WRL::Wrappers::HString runtime_class;
	THROW_IF_FAILED(runtime_class.Set(runtime_class_name));
	Microsoft::WRL::ComPtr<T> activation_factory;
	THROW_IF_FAILED(Windows::Foundation::GetActivationFactory(runtime_class, activation_factory.ReleaseAndGetAddressOf()));

	return activation_factory;
}

template<typename T, size_t N>
Microsoft::WRL::ComPtr<T> activate_instance(const wchar_t(&runtime_class_name)[N])
{
	Microsoft::WRL::Wrappers::HString runtime_class;
	THROW_IF_FAILED(runtime_class.Set(runtime_class_name));
	Microsoft::WRL::ComPtr<T> instance;
	THROW_IF_FAILED(Windows::Foundation::ActivateInstance(runtime_class, instance.ReleaseAndGetAddressOf()));

	return instance;
}

template<typename T>
struct reference : public ABI::Windows::Foundation::IReference<T>, public ABI::Windows::Foundation::IPropertyValue
{
	
public:
	reference(T value) : m_reference(value) {}

	virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObject) override
	{
		if (ppvObject == nullptr)
		{
			return E_POINTER;
		}

		if (riid == __uuidof(IUnknown))
		{
			++m_refs;
			*ppvObject = this;
			return S_OK;
		}
		if (riid == __uuidof(IInspectable))
		{
			++m_refs;
			*ppvObject = this;
			return S_OK;
		}

		if (riid == __uuidof(ABI::Windows::Foundation::IPropertyValue))
		{
			++m_refs;
			*ppvObject = static_cast<ABI::Windows::Foundation::IPropertyValue *>(this);
			return S_OK;
		}

		if (riid == __uuidof(ABI::Windows::Foundation::IReference<T>))
		{
			++m_refs;
			*ppvObject = static_cast<ABI::Windows::Foundation::IReference<T> *>(this);
			return S_OK;
		}

		return E_NOINTERFACE;
	}

	virtual ULONG STDMETHODCALLTYPE AddRef(void) override
	{
		++m_refs;
		return 4;
	}

	virtual ULONG STDMETHODCALLTYPE Release(void) override
	{
		auto refs = --m_refs;
		if (refs == 0)
		{
			delete this;
		}

		return 3;
	}

	virtual HRESULT STDMETHODCALLTYPE GetIids(ULONG *iidCount, IID **iids) override
	{
		if (iidCount == nullptr)
		{
			return E_POINTER;
		}
		if (iids == nullptr)
		{
			return E_POINTER;
		}

		static IID iid_array[]
		{
			__uuidof(ABI::Windows::Foundation::IReference<T>),
			__uuidof(ABI::Windows::Foundation::IPropertyValue)
		};

		*iidCount = 2;
		*iids = iid_array;
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE GetRuntimeClassName(HSTRING *className) override
	{
		HSTRING rc_name = nullptr;
		if (className == nullptr)
		{
			return E_POINTER;
		}

		WindowsCreateString(L"reference", 9, &rc_name);
		*className = rc_name;
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel *trustLevel) override
	{
		if (trustLevel == nullptr)
		{
			return E_POINTER;
		}

		*trustLevel = BaseTrust;
		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE get_Type(ABI::Windows::Foundation::PropertyType *value) override
	{
		if (value == nullptr)
		{
			return E_POINTER;
		}
		*value = ABI::Windows::Foundation::PropertyType_OtherType;
		return S_OK;
	}
	virtual HRESULT STDMETHODCALLTYPE get_IsNumericScalar(boolean *value) override
	{
		if (value == nullptr)
		{
			return E_POINTER;
		}
		*value = false;
		return S_OK;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt8(BYTE *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInt16(INT16 *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt16(UINT16 *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInt32(INT32 *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt32(UINT32 *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInt64(INT64 *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt64(UINT64 *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetSingle(FLOAT *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetDouble(DOUBLE *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetChar16(WCHAR *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetBoolean(boolean *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetString(HSTRING *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetGuid(GUID *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetDateTime(ABI::Windows::Foundation::DateTime *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetTimeSpan(ABI::Windows::Foundation::TimeSpan *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetPoint(ABI::Windows::Foundation::Point *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetSize(ABI::Windows::Foundation::Size *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetRect(ABI::Windows::Foundation::Rect *) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt8Array(UINT32 *, BYTE **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInt16Array(UINT32 *, INT16 **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt16Array(UINT32 *, UINT16 **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInt32Array(UINT32 *, INT32 **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt32Array(UINT32 *, UINT32 **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInt64Array(UINT32 *, INT64 **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetUInt64Array(UINT32 *, UINT64 **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetSingleArray(UINT32 *, FLOAT **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetDoubleArray(UINT32 *, DOUBLE **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetChar16Array(UINT32 *, WCHAR **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetBooleanArray(UINT32 *, boolean **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetStringArray(UINT32 *, HSTRING **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetInspectableArray(UINT32 *, IInspectable ***) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetGuidArray(UINT32 *, GUID **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetDateTimeArray(UINT32 *, ABI::Windows::Foundation::DateTime **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetTimeSpanArray(UINT32 *, ABI::Windows::Foundation::TimeSpan **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetPointArray(UINT32 *, ABI::Windows::Foundation::Point **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetSizeArray(UINT32 *, ABI::Windows::Foundation::Size **) override
	{
		return E_NOTIMPL;
	}
	virtual HRESULT STDMETHODCALLTYPE GetRectArray(UINT32 *, ABI::Windows::Foundation::Rect **) override
	{
		return E_NOTIMPL;
	}

	virtual HRESULT STDMETHODCALLTYPE get_Value(_Out_ T *value) override
	{
		if (value == nullptr)
		{
			return E_POINTER;
		}
		*value = m_reference;
		return S_OK;
	}

	T m_reference{};
	std::atomic_uint32_t m_refs = 1;
};