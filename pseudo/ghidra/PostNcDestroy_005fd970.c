// PostNcDestroy  005fd970

/* Library Function - Single Match
    protected: virtual void __thiscall CMFCDropDownFrame::PostNcDestroy(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCDropDownFrame::PostNcDestroy(CMFCDropDownFrame *this)

{
  if (*(int *)(this + 0x1bc) != 0) {
    (**(code **)(**(int **)(this + 0x1bc) + 8))();
  }
  FUN_005f8340();
  return;
}

