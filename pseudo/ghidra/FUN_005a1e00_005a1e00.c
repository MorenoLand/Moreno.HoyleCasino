// FUN_005a1e00  005a1e00

void __thiscall FUN_005a1e00(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 extraout_ECX;
  int local_8;
  
  for (local_8 = 0; uVar2 = (undefined2)((uint)param_1 >> 0x10), local_8 < 3; local_8 = local_8 + 1)
  {
    sVar1 = FUN_005a26f0(param_2,local_8);
    uVar2 = (undefined2)((uint)extraout_ECX >> 0x10);
    if (sVar1 == 0) break;
    param_1 = extraout_ECX;
  }
  FUN_005a3b70(param_2,local_8,CONCAT22(uVar2,param_3));
  return;
}

