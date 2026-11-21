// AssertValid  0066f810

/* Library Function - Single Match
    public: virtual void __thiscall COleLinkingDoc::AssertValid(void)const 
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall COleLinkingDoc::AssertValid(COleLinkingDoc *this)

{
  FUN_005f62b0();
  if (*(int *)(this + 0x238) != 0) {
    (**(code **)(**(int **)(this + 0x238) + 0x70))();
  }
  return;
}

