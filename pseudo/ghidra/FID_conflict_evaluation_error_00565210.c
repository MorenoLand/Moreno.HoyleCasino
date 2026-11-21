// FID_conflict:evaluation_error  00565210

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CTypedPtrList<class CList<void *,void *>,struct COleControlSiteOrWnd
   *>::CTypedPtrList<class CList<void *,void *>,struct COleControlSiteOrWnd *>(int)
    public: __thiscall CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd
   *>::CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd *>(int)
    public: __thiscall __non_rtti_object::__non_rtti_object(class __non_rtti_object const &)
    public: __thiscall std::__non_rtti_object::__non_rtti_object(class std::__non_rtti_object const
   &)
     21 names - too many to list
   
   Library: Visual Studio */

undefined4 * __thiscall FID_conflict_evaluation_error(undefined4 *param_1,undefined4 param_2)

{
  FUN_006010a0(param_2);
  *param_1 = VPMultiDealCardCycle::vftable;
  return param_1;
}

