// FUN_004fd9c0  004fd9c0

bool __thiscall FUN_004fd9c0(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined2 *)0x0) {
    uVar1 = FUN_0047f950(param_1);
    *param_2 = uVar1;
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x164))(0);
    *(undefined4 *)(param_2 + 2) = uVar2;
  }
  return param_2 != (undefined2 *)0x0;
}

