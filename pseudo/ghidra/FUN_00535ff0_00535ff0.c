// FUN_00535ff0  00535ff0

void __fastcall FUN_00535ff0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00536d40();
  FUN_0052e160();
  FUN_00535f60();
  iVar1 = (**(code **)(*DAT_00793394 + 0x40))();
  if (iVar1 == 1) {
    uVar2 = FUN_00536bc0();
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  else if (iVar1 == 3) {
    if (*(int *)(DAT_007947e0 + 0x4f14) == 9) {
      uVar2 = FUN_00536da0(1,3,4);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
    }
    else {
      uVar2 = FUN_00536da0(1,0,2);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
    }
  }
  else if (iVar1 == 5) {
    uVar2 = FUN_00537050();
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  else {
    FUN_005e9f20("false","..\\Casino\\slotmachinestate.cpp",0x108);
  }
  return;
}

