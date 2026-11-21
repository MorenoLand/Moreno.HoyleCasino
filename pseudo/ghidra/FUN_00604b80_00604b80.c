// FUN_00604b80  00604b80

CMFCToolBarsToolsPropertyPage * __fastcall FUN_00604b80(CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSToolsListBox *pCVar1;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aab1e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f49d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *(undefined ***)param_1 = sciSlider::vftable;
  *(undefined4 *)(param_1 + 0x80) = 1;
  param_1[0x6c] = (CMFCToolBarsToolsPropertyPage)0x1;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  pCVar1 = operator_new(0x188);
  local_8._0_1_ = 1;
  if (pCVar1 == (CVSToolsListBox *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = CVSToolsListBox::CVSToolsListBox(pCVar1,param_1);
  }
  local_8._0_1_ = 0;
  *(undefined4 *)(param_1 + 0x48) = local_28;
  pCVar1 = operator_new(0x17c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (pCVar1 == (CVSToolsListBox *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = CVSToolsListBox::CVSToolsListBox(pCVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x4c) = local_2c;
  ExceptionList = local_10;
  return param_1;
}

