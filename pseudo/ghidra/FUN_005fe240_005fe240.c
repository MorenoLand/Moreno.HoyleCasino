// FUN_005fe240  005fe240

undefined4 __thiscall
FUN_005fe240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_14 [16];
  
  cVar1 = (**(code **)(*DAT_015e55e4 + 0x48))(param_2,local_14,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005fe290(local_14,param_3,param_4,param_5);
  }
  return uVar2;
}

