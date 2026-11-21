// FUN_0052fba0  0052fba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052fba0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_c;
  int local_8;
  
  uVar2 = FUN_005fc360();
  switch(uVar2) {
  case 0:
    FUN_00535ff0();
    (**(code **)(*param_1 + 8))(1,1);
    break;
  case 1:
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(DAT_00793390 + 0xf4 + local_8 * 4) + 0x70))();
      if (param_1[local_8 + 8] == 0) {
        FUN_005e9f20("blurs[i]","..\\Casino\\slotmachinedisplay.cpp",0x55e);
      }
      (**(code **)(*(int *)param_1[local_8 + 8] + 0x74))();
    }
    (**(code **)(*DAT_0162ee84 + 0x80))
              (0x18a92,0,0,10,0,0x3f800000,_DAT_006b3654,DAT_00793390 + 0x68);
    (**(code **)(*param_1 + 8))(2,0);
    break;
  case 2:
    iVar3 = FUN_00637810(0);
    (**(code **)(*param_1 + 8))(3,iVar3 * 9);
    break;
  case 3:
    if ((param_1[0xb] < 0) || (2 < param_1[0xb])) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\slotmachinedisplay.cpp",0x573);
    }
    else {
      FUN_0052f3f0(1);
      (**(code **)(**(int **)(DAT_00793390 + 0xf4 + param_1[0xb] * 4) + 0x74))();
      FUN_0052f240();
      if (param_1[param_1[0xb] + 8] == 0) {
        FUN_005e9f20("blurs[machineStopped]","..\\Casino\\slotmachinedisplay.cpp",0x570);
      }
      (**(code **)(*(int *)param_1[param_1[0xb] + 8] + 0x70))();
    }
    param_1[0xb] = param_1[0xb] + 1;
    if (param_1[0xb] < 3) {
      iVar3 = FUN_00637810(0);
      (**(code **)(*param_1 + 8))(3,iVar3 * 5);
    }
    else {
      FUN_00609870(*(undefined4 *)(DAT_00793390 + 0x68),1);
      (**(code **)(*param_1 + 8))(4,2);
    }
    break;
  case 4:
    for (iStack_c = 0; iStack_c < 3; iStack_c = iStack_c + 1) {
      if (*(int *)(*(int *)(DAT_00793390 + 0xf4 + iStack_c * 4) + 0x17c) != 0) {
        (**(code **)(*param_1 + 4))(4);
        (**(code **)(*param_1 + 0x1c))(0);
        return;
      }
    }
    (**(code **)(*param_1 + 8))(5,0);
    break;
  case 5:
    for (iStack_c = 0; iStack_c < 3; iStack_c = iStack_c + 1) {
      if (param_1[iStack_c + 8] != 0) {
        (**(code **)(*(int *)param_1[iStack_c + 8] + 0x70))();
        if ((undefined4 *)param_1[iStack_c + 8] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)param_1[iStack_c + 8])(1);
        }
        param_1[iStack_c + 8] = 0;
      }
    }
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 8))(6,0);
    break;
  case 6:
    if ((param_1[0xb] < 0) || (2 < param_1[0xb])) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\slotmachinedisplay.cpp",0x5b2);
    }
    else {
      if (*(int *)(DAT_00793394 + 8 + param_1[0xb] * 4) == 1) {
        FUN_0052f360();
        *(undefined1 *)((int)param_1 + param_1[0xb] + 0x30) = 1;
      }
      else if (*(int *)(DAT_00793394 + 8 + param_1[0xb] * 4) == -1) {
        FUN_0052f2d0();
        *(undefined1 *)((int)param_1 + param_1[0xb] + 0x30) = 1;
      }
      if (*(char *)((int)param_1 + param_1[0xb] + 0x30) != '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))
                  (0x30f0bf,0,0,5,1,0x3f800000,_DAT_006b3654,DAT_00793390 + 0x70);
      }
    }
    param_1[0xb] = param_1[0xb] + 1;
    if (param_1[0xb] < 3) {
      if (*(char *)((int)param_1 + param_1[0xb] + 0x2f) == '\0') {
        (**(code **)(*param_1 + 8))(7,0);
      }
      else {
        iVar3 = FUN_00637810(0);
        (**(code **)(*param_1 + 8))(7,iVar3 * 9 + 2);
      }
    }
    else {
      (**(code **)(*param_1 + 8))(8,2);
    }
    break;
  case 7:
    cVar1 = FUN_005f45a0(*(undefined4 *)(DAT_00793390 + 0x70));
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 8))(7,2);
    }
    (**(code **)(*param_1 + 8))(6,0);
    break;
  case 8:
    for (iStack_c = 0; iStack_c < 3; iStack_c = iStack_c + 1) {
      if (*(int *)(*(int *)(DAT_00793390 + 0xf4 + iStack_c * 4) + 0x17c) != 0) {
        (**(code **)(*param_1 + 4))(8);
        (**(code **)(*param_1 + 0x1c))(0);
        return;
      }
    }
    iVar3 = FUN_00637810(0);
    (**(code **)(*param_1 + 8))(9,iVar3 * 6);
    break;
  case 9:
    (**(code **)(*param_1 + 8))(10,0);
    break;
  case 10:
    FUN_005fc420(0);
    FUN_00535d80();
  }
  return;
}

