// CMFCToolBarEditCtrl  00519bc0

/* Library Function - Single Match
    public: __thiscall CMFCToolBarEditCtrl::CMFCToolBarEditCtrl(class CMFCToolBarEditBoxButton &)
   
   Library: Visual Studio 2010 Debug */

CMFCToolBarEditCtrl * __thiscall
CMFCToolBarEditCtrl::CMFCToolBarEditCtrl
          (CMFCToolBarEditCtrl *this,CMFCToolBarEditBoxButton *param_1)

{
  FUN_00601a80();
  *(undefined ***)this = GroupViewHelpButton::vftable;
  *(CMFCToolBarEditBoxButton **)(this + 0x1e4) = param_1;
  *(undefined4 *)(this + 0x1dc) = 0;
  return this;
}

