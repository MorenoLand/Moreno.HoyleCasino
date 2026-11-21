// FUN_005d0c30  005d0c30

undefined8 * __thiscall FUN_005d0c30(undefined4 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(DAT_007947e0 + 0x4f10) < 3) {
    iVar1 = FUN_005d0b60();
    uVar2 = FUN_0064c8a0((iVar1 * param_3) / 100,(iVar1 * param_3) % 100);
    *param_2 = uVar2;
  }
  else {
    iVar1 = FUN_005d0aa0(0,param_1);
    uVar2 = FUN_0064c8a0(iVar1 * param_3);
    *param_2 = uVar2;
  }
  return param_2;
}

