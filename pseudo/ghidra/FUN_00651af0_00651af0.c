// FUN_00651af0  00651af0

void __fastcall FUN_00651af0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_24;
  int local_10;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0x220))
            (*(undefined4 *)(param_1[0x20] + param_1[2] * 0x14),
             *(undefined4 *)(param_1[0x20] + 4 + param_1[2] * 0x14));
  FUN_00652900(0);
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (param_1[local_8 + 8] != 0) {
      (**(code **)(*(int *)param_1[local_8 + 8] + 0x74))();
    }
  }
  if ((*(int *)(param_1[2] * 0x14 + param_1[0x20]) == 0) ||
     (*(int *)((param_1[2] + 1) * 0x14 + param_1[0x20]) == 0)) {
    (**(code **)(*(int *)param_1[7] + 0x78))(0x2a8,0x13);
    FUN_00652900(0x67);
  }
  else {
    DVar2 = GetTickCount();
    *(DWORD *)(param_1[0x20] + 0x10 + param_1[2] * 0x14) = DVar2;
    FUN_00652b60(param_1[2],&local_10,&local_c);
    iVar3 = FUN_00652da0(*(undefined4 *)(param_1[0x20] + param_1[2] * 0x14));
    iVar5 = param_1[1];
    iVar1 = param_1[1];
    uVar4 = FUN_005f5590();
    (**(code **)(*(int *)param_1[7] + 0x78))(iVar5 * local_10 + (iVar1 * local_c) / iVar3,uVar4);
    if ((char)param_1[4] == '\0') {
      FUN_006520f0();
      switch(*(undefined4 *)(param_1[0x20] + 8 + param_1[2] * 0x14)) {
      case 0:
        break;
      case 1:
        if (param_1[5] < 1) {
          if (*(int *)(param_1[0x20] + 0xc + param_1[2] * 0x14) < 1) {
            local_24 = 1;
          }
          else {
            local_24 = *(int *)(param_1[0x20] + 0xc + param_1[2] * 0x14);
          }
          param_1[5] = local_24;
        }
        else {
          param_1[5] = param_1[5] + -1;
          if ((param_1[5] == 0) &&
             (param_1[2] = param_1[2] + 1, *(int *)(param_1[0x20] + 8 + param_1[2] * 0x14) == 1)) {
            FUN_005e9f20("m_table[m_itemIndex].action != TUTORIAL_ACTION_DELAY",
                         "..\\casinoShell\\tutorial.cpp",0x9d);
          }
        }
        (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
        break;
      case 2:
        iVar5 = (**(code **)(*(int *)*param_1 + 0x218))();
        if (iVar5 == 0) {
          FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xad);
        }
        else {
          uVar9 = 1;
          uVar8 = 0x3c;
          uVar4 = *(undefined4 *)(*param_1 + 4);
          uVar7 = 0xffffffff;
          uVar6 = *(undefined4 *)(param_1[0x20] + 0xc + param_1[2] * 0x14);
          (**(code **)(*(int *)*param_1 + 0x218))(uVar6,0xffffffff,uVar4,0x3c,1);
          FUN_00646fa0(uVar6,uVar7,uVar4,uVar8,uVar9);
          param_1[2] = param_1[2] + 1;
        }
        break;
      case 3:
        if (*(int *)((param_1[2] + 1) * 0x14 + param_1[0x20]) == 0) {
          FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xb1);
        }
        else if (*(int *)((param_1[2] + 1) * 0x14 + param_1[0x20]) ==
                 *(int *)(param_1[2] * 0x14 + param_1[0x20])) {
          if (*(int *)(param_1[0x20] + 4 + (param_1[2] + 1) * 0x14) ==
              *(int *)(param_1[0x20] + 4 + param_1[2] * 0x14)) {
            FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xb5);
          }
          else {
            (**(code **)(*(int *)*param_1 + 0x228))
                      (*(undefined4 *)(param_1[0x20] + param_1[2] * 0x14),
                       *(undefined4 *)(param_1[0x20] + 4 + (param_1[2] + 1) * 0x14));
            if (*(char *)((int)param_1 + 0x11) == '\0') {
              FUN_00652900(100);
            }
            else {
              FUN_006526e0();
            }
          }
        }
        else {
          FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xb3);
        }
        break;
      case 4:
        if (*(char *)((int)param_1 + 0x11) == '\0') {
          FUN_00652900(100);
        }
        else {
          FUN_006526e0();
        }
        break;
      case 5:
        if (*(int *)((param_1[2] + 1) * 0x14 + param_1[0x20]) == 0) {
          FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xc4);
        }
        else if (*(int *)((param_1[2] + 1) * 0x14 + param_1[0x20]) ==
                 *(int *)(param_1[2] * 0x14 + param_1[0x20])) {
          if (*(int *)(param_1[0x20] + 4 + (param_1[2] + 1) * 0x14) ==
              *(int *)(param_1[0x20] + 4 + param_1[2] * 0x14)) {
            FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",200);
          }
          else {
            (**(code **)(*(int *)*param_1 + 0x224))
                      (*(undefined4 *)(param_1[0x20] + param_1[2] * 0x14),
                       *(undefined4 *)(param_1[0x20] + 4 + (param_1[2] + 1) * 0x14));
            param_1[2] = param_1[2] + 1;
          }
        }
        else {
          FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xc6);
        }
        break;
      default:
        FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0xcd);
      }
    }
  }
  return;
}

