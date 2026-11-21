// AssertValid  0064bbf0

/* Library Function - Single Match
    public: virtual void __thiscall COleServerDoc::AssertValid(void)const 
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall COleServerDoc::AssertValid(COleServerDoc *this)

{
  FUN_005eb5a0();
  if (*(int *)(this + 0x180) != 0) {
    (**(code **)(**(int **)(this + 0x180) + 0x70))();
  }
  if (*(int *)(this + 0x17c) != 0) {
    (**(code **)(**(int **)(this + 0x17c) + 0x70))();
  }
  return;
}

