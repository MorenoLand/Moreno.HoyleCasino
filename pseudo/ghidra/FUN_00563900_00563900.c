// FUN_00563900  00563900

void __thiscall FUN_00563900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  
  iVar2 = *(int *)(*(int *)(DAT_00793440 + 0xb8) + 0x6bc + param_2 * 4);
  if (param_2 == -1) {
    FUN_00563ad0();
  }
  else {
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      iVar1 = *(int *)(DAT_0079343c + 0x34) + 0xf6 + param_2 * 10;
      uVar3 = FUN_00564d10(CONCAT22((short)((uint)iVar1 >> 0x10),
                                    *(undefined2 *)(iVar1 + local_1c * 2)));
      (**(code **)(**(int **)(param_1 + 8 + local_1c * 4) + 0xb0))(uVar3);
    }
    uVar3 = FUN_005604b0(iVar2);
    uVar3 = FUN_005603b0(uVar3);
    (**(code **)(**(int **)(param_1 + 4) + 0xb0))(uVar3);
    if (iVar2 == -1) {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 1;
      FUN_00566b00(iVar2);
      FUN_00566ae0(*(undefined4 *)(*(int *)(DAT_00793440 + 0xb8) + 0x780 + param_2 * 4));
    }
    FUN_00563a50();
  }
  return;
}

