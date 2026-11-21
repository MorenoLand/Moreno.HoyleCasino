// FUN_0056e930  0056e930

void __fastcall FUN_0056e930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  puVar3 = &local_c;
  FUN_005dcb00(0,puVar3);
  FUN_005d5ac0(puVar3);
  if (2 < *(int *)(param_1 + 0x9c)) {
    iVar1 = FUN_0056e9f0(*(undefined4 *)(param_1 + 0x9c));
    if ((int)local_c < iVar1) goto LAB_0056e9b8;
  }
  if (2 < *(int *)(param_1 + 0x9c)) {
    return;
  }
  if ((int)local_c != 0) {
    return;
  }
  iVar1 = FUN_0056eac0(*(undefined4 *)(param_1 + 0x9c));
  if (iVar1 <= local_c._4_4_) {
    return;
  }
LAB_0056e9b8:
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(int *)(param_1 + 0xa4) == 0)) {
    uVar2 = FUN_005dcb00(0);
    FUN_005dbb70(uVar2);
  }
  return;
}

