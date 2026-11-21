// FUN_00402960  00402960

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00402960(int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_c;
  int local_8;
  int *piVar5;
  
  local_c = param_1;
  if (*(int *)(param_1 + 4) != 4) {
    iVar3 = FUN_00639110(*(undefined4 *)(param_1 + 4));
    if (iVar3 != 0) {
      uVar6 = 100;
      FUN_00639110(*(undefined4 *)(local_c + 4));
      FUN_00646380(uVar6);
      uVar7 = 0;
      uVar6 = 0;
      FUN_00639110(*(undefined4 *)(local_c + 4));
      FUN_006464d0(uVar6,uVar7);
    }
    FUN_005d9180(*(undefined4 *)(local_c + 4),0);
  }
  piVar4 = &local_c;
  if ((*(int *)(local_c + 4) == 0) || (*(int *)(local_c + 4) == 4)) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      pcVar1 = *(code **)(**(int **)(local_c + 8 + local_8 * 4) + 0x70);
      piVar5 = piVar4 + -1;
      piVar4 = piVar4 + -1;
      *piVar5 = 0x402a1d;
      (*pcVar1)();
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      piVar4[-1] = local_8;
      piVar4[-2] = *(undefined4 *)(local_c + 4);
      piVar4[-3] = 0x402a4d;
      sVar2 = FUN_004093d0();
      if (sVar2 != 0) {
        piVar4[-1] = local_8;
        piVar4[-2] = *(undefined4 *)(local_c + 4);
        piVar4[-3] = 0x402a6c;
        FUN_00401fd0();
      }
    }
  }
  if (*(int *)(local_c + 0x14) != 0) {
    pcVar1 = *(code **)(**(int **)(local_c + 0x14) + 0x74);
    piVar4[-1] = 0x402a8a;
    (*pcVar1)();
  }
  return;
}

