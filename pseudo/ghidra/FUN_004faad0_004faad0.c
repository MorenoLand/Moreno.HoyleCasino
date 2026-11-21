// FUN_004faad0  004faad0

void __fastcall FUN_004faad0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (*(int *)(DAT_00793578 + 0x1c0) == 0) {
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0x9c) + 500);
    if (iVar1 == 1) {
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e0) + 0x4c))(1,param_1,0,0);
      iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e0) + 0x54))
                        (iVar1,param_1,iVar3);
    }
    else if (iVar1 == 2) {
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e4) + 0x4c))();
      iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e4) + 0x54))
                        (iVar1,param_1,iVar3);
    }
    else if (iVar1 == 3) {
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e8) + 0x4c))();
      iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e8) + 0x54))
                        (iVar1,param_1,iVar3);
    }
    else {
      FUN_005e9f20("false","..\\Casino\\PokerRoom.cpp",0x1c8);
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1f8) + 0x44))(iVar3 + 1,iVar4 + 1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1f8) + 0x6c))(100);
    FUN_005eb5d0(100);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1f8) + 0x74))();
  }
  if (*(int *)(DAT_00793578 + 0x1c0) == 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x220) = 0;
    if (*(char *)(*(int *)(param_1 + 0xa0) + 0x228) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1e0) + 0x1dc) = 0;
      uVar2 = FUN_00630f40("SID_POKER_HOLD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 500) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x208) + 0x70))();
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1e0) + 0x1dc) = 1;
      uVar2 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 500) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x208) + 0x74))();
      *(int *)(*(int *)(param_1 + 0xa0) + 0x220) = *(int *)(*(int *)(param_1 + 0xa0) + 0x220) + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0xa0) + 0x227) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1e4) + 0x1dc) = 0;
      uVar2 = FUN_00630f40("SID_POKER_HOLD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x1f8) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x20c) + 0x70))();
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1e4) + 0x1dc) = 1;
      uVar2 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x1f8) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x20c) + 0x74))();
      *(int *)(*(int *)(param_1 + 0xa0) + 0x220) = *(int *)(*(int *)(param_1 + 0xa0) + 0x220) + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0xa0) + 0x226) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1e8) + 0x1dc) = 0;
      uVar2 = FUN_00630f40("SID_POKER_HOLD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x1fc) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x210) + 0x70))();
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1e8) + 0x1dc) = 1;
      uVar2 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x1fc) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x210) + 0x74))();
      *(int *)(*(int *)(param_1 + 0xa0) + 0x220) = *(int *)(*(int *)(param_1 + 0xa0) + 0x220) + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0xa0) + 0x225) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1ec) + 0x1dc) = 0;
      uVar2 = FUN_00630f40("SID_POKER_HOLD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x200) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x214) + 0x70))();
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1ec) + 0x1dc) = 1;
      uVar2 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x200) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x214) + 0x74))();
      *(int *)(*(int *)(param_1 + 0xa0) + 0x220) = *(int *)(*(int *)(param_1 + 0xa0) + 0x220) + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0xa0) + 0x224) == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1f0) + 0x1dc) = 0;
      uVar2 = FUN_00630f40("SID_POKER_HOLD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x204) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x218) + 0x70))();
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x1f0) + 0x1dc) = 1;
      uVar2 = FUN_00630f40("SID_POKER_DISCARD");
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x204) + 0xb4))(uVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa0) + 0x218) + 0x74))();
      *(int *)(*(int *)(param_1 + 0xa0) + 0x220) = *(int *)(*(int *)(param_1 + 0xa0) + 0x220) + 1;
    }
  }
  return;
}

