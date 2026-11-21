// FUN_00531390  00531390

void __fastcall FUN_00531390(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      uVar3 = FUN_005f3e50();
      uVar3 = uVar3 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      if (uVar3 == 0) {
        if ((*(int *)(param_1 + 0x18c) == 3) &&
           (iVar5 = *(int *)(param_1 + 0x1b8), iVar1 = *(int *)(param_1 + 0x1bc),
           iVar4 = FUN_00531e30(), iVar4 < iVar5 + iVar1)) {
          FUN_00531e00();
          (**(code **)(**(int **)(param_1 + 0x188) + 0xb4))(param_1 + 0x1a8);
          iVar5 = FUN_005ef050();
          *(int *)(param_1 + 400) = iVar5 + 3;
          FUN_005ecc60(*(undefined4 *)(param_1 + 400));
          *(int *)(param_1 + 0x194) =
               ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 400)) / 2
               + *(int *)(param_1 + 0x10);
          (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
                    (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
          (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
        }
        else if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x194) + *(int *)(param_1 + 400)) {
          *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + -10;
          (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
                    (*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x14));
        }
        else {
          FUN_00531620();
        }
      }
    }
    else {
      cVar2 = FUN_00531db0();
      if (cVar2 != '\0') {
        cVar2 = FUN_005f54c0();
        if (cVar2 == '\0') {
          (**(code **)(**(int **)(param_1 + 0x188) + 0x70))();
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
          *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
        }
      }
      if (*(int *)(param_1 + 0x1a4) <= *(int *)(param_1 + 0x1a0)) {
        *(undefined1 *)(param_1 + 0x1c0) = 0;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        FUN_00531620();
      }
    }
  }
  return;
}

