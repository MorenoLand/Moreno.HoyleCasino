// SetOffset  006027d0

/* Library Function - Single Match
    public: void __thiscall CMFCPopupMenuBar::SetOffset(int)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCPopupMenuBar::SetOffset(CMFCPopupMenuBar *this,int param_1)

{
  if (*(int *)(this + 0x194) != param_1) {
    *(int *)(this + 0x194) = param_1;
    (**(code **)(*(int *)this + 0xec))();
  }
  return;
}

