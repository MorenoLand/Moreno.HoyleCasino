// FUN_005cb610  005cb610

undefined4 __fastcall FUN_005cb610(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  CPane *this;
  undefined4 uVar3;
  CSize *pCVar4;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  cVar2 = (**(code **)(*param_1 + 0xb4))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    pCVar4 = (CSize *)&local_c;
    this = (CPane *)(**(code **)(*DAT_007947e4 + 0x25c))();
    CPane::GetMinSize(this,pCVar4);
    uVar1 = local_c;
    if ((int)local_c == 0) {
      uVar3 = (**(code **)(*DAT_007947e4 + 0x2b0))();
      uVar1 = CONCAT44(local_c._4_4_,uVar3);
    }
    local_c._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_c._0_4_ = (int)uVar1;
    local_c._0_4_ = -(int)local_c;
    local_c._4_4_ = -local_c._4_4_;
    (**(code **)(*param_1 + 0xc4))(&local_c,0,1);
    uVar3 = 1;
  }
  return uVar3;
}

