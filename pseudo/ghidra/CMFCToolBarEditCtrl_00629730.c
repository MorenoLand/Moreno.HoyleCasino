// CMFCToolBarEditCtrl  00629730

/* Library Function - Single Match
    public: __thiscall CMFCToolBarEditCtrl::CMFCToolBarEditCtrl(class CMFCToolBarEditBoxButton &)
   
   Library: Visual Studio 2010 Debug */

CMFCToolBarEditCtrl * __thiscall
CMFCToolBarEditCtrl::CMFCToolBarEditCtrl
          (CMFCToolBarEditCtrl *this,CMFCToolBarEditBoxButton *param_1)

{
  FUN_005ec5a0();
  *(undefined ***)this = sciListBoxText::vftable;
  *(CMFCToolBarEditBoxButton **)(this + 0x1d0) = param_1;
  *(undefined4 *)(this + 0x1d4) = 0;
  return this;
}

