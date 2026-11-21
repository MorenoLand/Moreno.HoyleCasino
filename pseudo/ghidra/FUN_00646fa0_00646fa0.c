// FUN_00646fa0  00646fa0

void __thiscall
FUN_00646fa0(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined1 param_6)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  size_t sVar4;
  void *_Src;
  int iVar5;
  size_t _Size;
  undefined4 uVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x17c);
  cVar2 = FUN_00637730(0);
  if ((((cVar2 != '\0') || (param_3 == 6000)) ||
      (cVar2 = (**(code **)(*DAT_0162ee84 + 0x3a8))(*(undefined4 *)(*(int *)(param_1 + 4) + 8)),
      cVar2 != '\0')) && (piVar1 != (int *)0x0)) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    if (((cVar2 == '\0') || (cVar2 = FUN_00648ae0(cVar2,param_1,uVar6), cVar2 != '\0')) &&
       (*(int *)(*(int *)(param_1 + 4) + 0xc) == -1)) {
      uVar6 = *(undefined4 *)(param_1 + 0x34);
      FUN_006464d0(1,0);
      *(undefined4 *)(param_1 + 0x34) = uVar6;
      piVar3 = (int *)FUN_00603c50(0x20534443,param_2,0);
      sVar4 = FUN_0061ed80();
      if (0x400 < (int)sVar4) {
        FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x20a);
        FUN_006041d0(piVar3);
        return;
      }
      _Size = sVar4;
      _Src = (void *)(**(code **)(*piVar3 + 4))();
      memcpy(piVar1 + 0xb,_Src,_Size);
      FUN_006041d0(piVar3);
      piVar1[10] = param_2;
      piVar1[0x10b] = (int)sVar4 / 2;
      piVar1[0x10c] = 0;
      piVar1[9] = (int)param_4;
      piVar1[0x110] = param_5;
      iVar5 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 4))();
      piVar1[0x111] = iVar5;
      *(undefined1 *)(piVar1 + 0x112) = param_6;
      (**(code **)(*piVar1 + 8))((-(*(char *)(param_1 + 0x51) != '\0') & 3U) + 6,0);
      if (*(char *)(param_1 + 0x51) == '\0') {
        return;
      }
      FUN_005fc3d0();
      return;
    }
  }
  if (piVar1 == (int *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x1fc);
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0x1c))(param_5);
  }
  return;
}

