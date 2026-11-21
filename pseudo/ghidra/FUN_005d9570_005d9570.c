// FUN_005d9570  005d9570

undefined4 __thiscall FUN_005d9570(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  
  if (DAT_00795f95 == '\0') {
    local_28 = (**(code **)(*DAT_0162ee84 + 0x370))(1);
  }
  else {
    iVar1 = FUN_005dcb00(param_2);
    local_28 = *(undefined4 *)(iVar1 + 8);
  }
  uVar7 = 1;
  uVar6 = 1;
  uVar5 = 1;
  uVar4 = 0;
  uVar2 = local_28;
  FUN_005dcb00(param_2,local_28,0,1,1,1);
  FUN_0063a8d0(uVar2,uVar4,uVar5,uVar6,uVar7);
  uVar3 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_2,uVar3);
  FUN_005d5f80(uVar3);
  uVar3 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_2,uVar3);
  FUN_005d6050(uVar3);
  uVar2 = FUN_005dcb00(param_2);
  (**(code **)(*param_1 + 0x264))(uVar2);
  FUN_005d8f50(param_2);
  return local_28;
}

