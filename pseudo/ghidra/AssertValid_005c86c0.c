// AssertValid  005c86c0

/* Library Function - Single Match
    public: virtual void __thiscall COleLinkingDoc::AssertValid(void)const 
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall COleLinkingDoc::AssertValid(COleLinkingDoc *this)

{
  FUN_005d8020();
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x80) + 8))();
  }
  return;
}

