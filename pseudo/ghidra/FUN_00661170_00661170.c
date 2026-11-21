// FUN_00661170  00661170

undefined4 __thiscall FUN_00661170(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  iVar1 = (**(code **)(*param_1 + 0xec))(param_2);
  if (iVar1 == -1) {
    local_10 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xec))(param_2);
    local_10 = FUN_0060ca40(uVar2);
  }
  return local_10;
}

