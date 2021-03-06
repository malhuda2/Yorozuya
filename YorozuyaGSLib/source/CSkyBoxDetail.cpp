#include <CSkyBoxDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CSkyBoxDrawSkyBox1_ptr CSkyBoxDrawSkyBox1_next(nullptr);
        Info::CSkyBoxDrawSkyBox1_clbk CSkyBoxDrawSkyBox1_user(nullptr);
        
        Info::CSkyBoxGetUsedVertexBufferSize2_ptr CSkyBoxGetUsedVertexBufferSize2_next(nullptr);
        Info::CSkyBoxGetUsedVertexBufferSize2_clbk CSkyBoxGetUsedVertexBufferSize2_user(nullptr);
        
        Info::CSkyBoxLoadSkyBox3_ptr CSkyBoxLoadSkyBox3_next(nullptr);
        Info::CSkyBoxLoadSkyBox3_clbk CSkyBoxLoadSkyBox3_user(nullptr);
        
        Info::CSkyBoxReleaseSkyBox4_ptr CSkyBoxReleaseSkyBox4_next(nullptr);
        Info::CSkyBoxReleaseSkyBox4_clbk CSkyBoxReleaseSkyBox4_user(nullptr);
        
        
        Info::CSkyBoxdtor_CSkyBox6_ptr CSkyBoxdtor_CSkyBox6_next(nullptr);
        Info::CSkyBoxdtor_CSkyBox6_clbk CSkyBoxdtor_CSkyBox6_user(nullptr);
        
        void CSkyBoxDrawSkyBox1_wrapper(struct CSkyBox* _this, void* arg_0)
        {
           CSkyBoxDrawSkyBox1_user(_this, arg_0, CSkyBoxDrawSkyBox1_next);
        };
        int64_t CSkyBoxGetUsedVertexBufferSize2_wrapper(struct CSkyBox* _this)
        {
           return CSkyBoxGetUsedVertexBufferSize2_user(_this, CSkyBoxGetUsedVertexBufferSize2_next);
        };
        void CSkyBoxLoadSkyBox3_wrapper(struct CSkyBox* _this, char* arg_0)
        {
           CSkyBoxLoadSkyBox3_user(_this, arg_0, CSkyBoxLoadSkyBox3_next);
        };
        void CSkyBoxReleaseSkyBox4_wrapper(struct CSkyBox* _this)
        {
           CSkyBoxReleaseSkyBox4_user(_this, CSkyBoxReleaseSkyBox4_next);
        };
        
        int64_t CSkyBoxdtor_CSkyBox6_wrapper(struct CSkyBox* _this)
        {
           return CSkyBoxdtor_CSkyBox6_user(_this, CSkyBoxdtor_CSkyBox6_next);
        };
        
        ::std::array<hook_record, 5> CSkyBox_functions = 
        {
            _hook_record {
                (LPVOID)0x1404f5be0L,
                (LPVOID *)&CSkyBoxDrawSkyBox1_user,
                (LPVOID *)&CSkyBoxDrawSkyBox1_next,
                (LPVOID)cast_pointer_function(CSkyBoxDrawSkyBox1_wrapper),
                (LPVOID)cast_pointer_function((void(CSkyBox::*)(void*))&CSkyBox::DrawSkyBox)
            },
            _hook_record {
                (LPVOID)0x1404f5a50L,
                (LPVOID *)&CSkyBoxGetUsedVertexBufferSize2_user,
                (LPVOID *)&CSkyBoxGetUsedVertexBufferSize2_next,
                (LPVOID)cast_pointer_function(CSkyBoxGetUsedVertexBufferSize2_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CSkyBox::*)())&CSkyBox::GetUsedVertexBufferSize)
            },
            _hook_record {
                (LPVOID)0x1404f5a60L,
                (LPVOID *)&CSkyBoxLoadSkyBox3_user,
                (LPVOID *)&CSkyBoxLoadSkyBox3_next,
                (LPVOID)cast_pointer_function(CSkyBoxLoadSkyBox3_wrapper),
                (LPVOID)cast_pointer_function((void(CSkyBox::*)(char*))&CSkyBox::LoadSkyBox)
            },
            _hook_record {
                (LPVOID)0x1404f5bc0L,
                (LPVOID *)&CSkyBoxReleaseSkyBox4_user,
                (LPVOID *)&CSkyBoxReleaseSkyBox4_next,
                (LPVOID)cast_pointer_function(CSkyBoxReleaseSkyBox4_wrapper),
                (LPVOID)cast_pointer_function((void(CSkyBox::*)())&CSkyBox::ReleaseSkyBox)
            },
            _hook_record {
                (LPVOID)0x1404f5a40L,
                (LPVOID *)&CSkyBoxdtor_CSkyBox6_user,
                (LPVOID *)&CSkyBoxdtor_CSkyBox6_next,
                (LPVOID)cast_pointer_function(CSkyBoxdtor_CSkyBox6_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CSkyBox::*)())&CSkyBox::dtor_CSkyBox)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
