// FUN_005645c0  005645c0

void __thiscall FUN_005645c0(int param_1,char param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == '\0') {
    for (local_c = 0; local_c < 0x31; local_c = local_c + 1) {
      if (*(char *)(param_1 + local_c + 0x564) != '\0') {
        for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
          sVar2 = *(short *)(*(int *)(DAT_0079343c + 0x34) + 0x3ac + local_18 * 2);
          if (sVar2 == 0) {
            local_8 = 0x35;
          }
          else {
            local_8 = FUN_00564d10(CONCAT22((short)((uint)local_18 >> 0x10),sVar2));
          }
          (**(code **)(**(int **)(param_1 + 200 + local_c * 0x14 + local_18 * 4) + 0xb0))(local_8);
        }
      }
    }
  }
  else {
    for (local_c = 0; local_c < 0x31; local_c = local_c + 1) {
      if (*(char *)(param_1 + local_c + 0x564) != '\0') {
        for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
          iVar1 = *(int *)(DAT_0079343c + 0x34) + 0xf6 + local_c * 10;
          uVar3 = FUN_00564d10(CONCAT22((short)((uint)iVar1 >> 0x10),
                                        *(undefined2 *)(iVar1 + local_18 * 2)));
          (**(code **)(**(int **)(param_1 + 200 + local_c * 0x14 + local_18 * 4) + 0xb0))(uVar3);
        }
      }
    }
  }
  return;
}

