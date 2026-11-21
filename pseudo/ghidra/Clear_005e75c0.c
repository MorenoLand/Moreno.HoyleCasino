// Clear  005e75c0

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall Concurrency::cancellation_token::_Clear(void)
    private: void __thiscall Concurrency::cancellation_token_registration::_Clear(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __fastcall Clear(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005f8990();
    *param_1 = 0;
  }
  return;
}

