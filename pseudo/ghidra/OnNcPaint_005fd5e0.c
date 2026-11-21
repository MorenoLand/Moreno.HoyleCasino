// OnNcPaint  005fd5e0

/* Library Function - Single Match
    protected: void __thiscall CMFCColorBar::OnNcPaint(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCColorBar::OnNcPaint(CMFCColorBar *this)

{
  if (*(int *)(this + 0x1f8) == 0) {
    FUN_005fd440();
  }
  else {
    FUN_005fd560();
  }
  return;
}

