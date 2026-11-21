// FUN_00615540  00615540

void __thiscall FUN_00615540(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = FUN_00615eb0();
  if (param_2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0xb8))();
    iVar3 = (**(code **)(*param_1 + 0xbc))();
    if (iVar2 - iVar3 <= param_2) {
      iVar2 = FUN_00615610();
      local_8 = iVar2 + local_8;
      goto LAB_006155c6;
    }
  }
  iVar2 = FUN_00615880();
  if (iVar2 != 0) {
    iVar2 = FUN_00615610();
    iVar3 = FUN_00615880();
    local_8 = (iVar2 * param_2) / iVar3 + local_8;
  }
LAB_006155c6:
  cVar1 = FUN_00615160();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)param_1[0x16] + 0x50))(local_8);
  }
  else {
    (**(code **)(*(int *)param_1[0x16] + 0x48))(local_8);
  }
  return;
}

