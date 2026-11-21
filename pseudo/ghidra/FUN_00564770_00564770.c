// FUN_00564770  00564770

void __thiscall FUN_00564770(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  if (param_4 == '\0') {
    sVar2 = *(short *)(*(int *)(DAT_0079343c + 0x34) + 0x3ac + param_3 * 2);
    if (sVar2 == 0) {
      local_8 = 0x35;
    }
    else {
      local_8 = FUN_00564d10(sVar2);
    }
    (**(code **)(**(int **)(param_1 + 200 + param_2 * 0x14 + param_3 * 4) + 0xb0))(local_8);
  }
  else {
    iVar1 = *(int *)(DAT_0079343c + 0x34) + 0xf6 + param_2 * 10;
    uVar3 = FUN_00564d10(CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + param_3 * 2))
                        );
    (**(code **)(**(int **)(param_1 + 200 + param_2 * 0x14 + param_3 * 4) + 0xb0))(uVar3);
  }
  *(undefined1 *)(param_1 + 0x595 + param_2 * 5 + param_3) = 1;
  return;
}

