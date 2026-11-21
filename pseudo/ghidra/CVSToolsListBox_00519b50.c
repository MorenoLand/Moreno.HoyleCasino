// CVSToolsListBox  00519b50

/* Library Function - Single Match
    public: __thiscall CVSToolsListBox::CVSToolsListBox(class CMFCToolBarsToolsPropertyPage *)
   
   Library: Visual Studio 2010 Debug */

CVSToolsListBox * __thiscall
CVSToolsListBox::CVSToolsListBox(CVSToolsListBox *this,CMFCToolBarsToolsPropertyPage *param_1)

{
  FUN_00601a80();
  *(undefined ***)this = GroupViewCancelButton::vftable;
  *(CMFCToolBarsToolsPropertyPage **)(this + 0x1e0) = param_1;
  return this;
}

