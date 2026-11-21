// PostNcDestroy  00629890

/* Library Function - Single Match
    protected: virtual void __thiscall CMFCDropDownFrame::PostNcDestroy(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCDropDownFrame::PostNcDestroy(CMFCDropDownFrame *this)

{
  if (*(int *)(this + 0x1d4) != 0) {
    (**(code **)(**(int **)(this + 0x1d4) + 0x70))();
  }
  FUN_005f62b0();
  return;
}

