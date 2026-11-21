// FUN_0045be80  0045be80

void __thiscall FUN_0045be80(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  
  FUN_005dcb00(param_2);
  piVar4 = (int *)FUN_0063aac0();
  if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined1 *)(DAT_00790738 + param_2 + 0xe0) = 1;
    FUN_004587e0();
    cVar3 = FUN_005df700(0xffffffff);
    if (cVar3 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_00718cf8);
      FUN_00461f80(param_2);
    }
  }
  else {
    FUN_0057ae30();
    if ((*(char *)(param_1 + 5) == '\0') && (param_2 != 4)) {
      *(undefined1 *)(param_1 + 5) = 1;
      uVar5 = FUN_00637810(2);
      FUN_005da360(uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 5) = 0;
      if (param_2 == 4) {
        *(undefined1 *)(DAT_00790738 + 0xe4) = 1;
        FUN_004587e0();
      }
      FUN_00452a40(param_2,DAT_00790738 + 0xa2 + param_2 * 2,DAT_00790738 + 0xac + param_2 * 2);
      if (*(short *)(DAT_00790738 + 0xa2 + param_2 * 2) ==
          *(short *)(DAT_00790738 + 0xac + param_2 * 2)) {
        FUN_005e9f20("paiGowState->low1[p] != paiGowState->low2[p]","..\\Casino\\paigowgame.cpp",
                     0x1a0);
      }
      cVar3 = FUN_00461320(param_2);
      if (cVar3 == '\0') {
        FUN_005e9f20("paiGowState->IsLowHandValid(p)","..\\Casino\\paigowgame.cpp",0x1a1);
      }
      FUN_0045c0a0(param_2);
      iVar2 = DAT_00790738;
      *(uint *)(DAT_00790738 + 0x124) = (param_2 != 4) - 1 & 4;
      *(int *)(iVar2 + 0x128) = param_2;
      (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(1,0);
    }
  }
  return;
}

