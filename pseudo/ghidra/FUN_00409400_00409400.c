// FUN_00409400  00409400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00409400(int param_1,undefined4 param_2,undefined2 param_3)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  int local_8;
  undefined2 uVar3;
  
  iVar2 = param_1;
  for (local_8 = 0; uVar3 = (undefined2)((uint)iVar2 >> 0x10), local_8 < 3; local_8 = local_8 + 1) {
    sVar1 = FUN_004093d0(param_2,local_8);
    uVar3 = (undefined2)((uint)extraout_ECX >> 0x10);
    if (sVar1 == 0) break;
    iVar2 = extraout_ECX;
  }
  FUN_004093a0(param_2,local_8,CONCAT22(uVar3,param_3));
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a8c,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  *(int *)(param_1 + 0x10d4) = *(int *)(param_1 + 0x10d4) + 1;
  return;
}

