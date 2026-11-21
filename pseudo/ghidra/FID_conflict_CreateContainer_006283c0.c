// FID_conflict:CreateContainer  006283c0

/* Library Function - Multiple Matches With Different Base Names
    public: virtual class COleControlContainer * __thiscall COccManager::CreateContainer(class CWnd
   *)
    public: virtual class COleControlSite * __thiscall COleControlSiteFactory::CreateSite(class
   COleControlContainer *,class CControlCreationInfo const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined4 FID_conflict_CreateContainer(CMFCToolBarEditBoxButton *param_1)

{
  CMFCToolBarEditCtrl *this;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab575;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x1d8);
  local_8 = 0;
  if (this == (CMFCToolBarEditCtrl *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = CMFCToolBarEditCtrl::CMFCToolBarEditCtrl(this,param_1);
  }
  ExceptionList = local_10;
  return local_20;
}

