// what  00629c70

/* Library Function - Multiple Matches With Same Base Name
    public: virtual char const * __thiscall exception::what(void)const 
    public: virtual char const * __thiscall std::exception::what(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

undefined ** __fastcall what(int param_1)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    ppuVar1 = &PTR_006b27f8;
  }
  else {
    ppuVar1 = *(undefined ***)(param_1 + 4);
  }
  return ppuVar1;
}

