// FUN_004627b0  004627b0

undefined4 __thiscall FUN_004627b0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  CPane *this;
  undefined4 uVar2;
  undefined8 uVar3;
  CSize *pCVar4;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  cVar1 = (**(code **)(*param_1 + 0xb4))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pCVar4 = (CSize *)&local_c;
    this = (CPane *)(**(code **)(*DAT_007947e4 + 0x25c))();
    CPane::GetMinSize(this,pCVar4);
    uVar3 = local_c;
    if ((int)local_c == 0) {
      uVar2 = (**(code **)(*DAT_007947e4 + 0x2b0))();
      uVar3 = CONCAT44(local_c._4_4_,uVar2);
    }
    local_c._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    local_c._0_4_ = (int)uVar3;
    local_c._0_4_ = -(int)local_c;
    local_c._4_4_ = -local_c._4_4_;
    (**(code **)(*param_1 + 0xc4))(&local_c,param_3,1);
    if (param_3 == 1) {
      uVar3 = FUN_0064c8a0(0,0);
      cVar1 = FUN_0064c820(uVar3);
      if (cVar1 != '\0') {
        *(undefined1 *)(DAT_00790738 + param_2 + 0xf4) = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

