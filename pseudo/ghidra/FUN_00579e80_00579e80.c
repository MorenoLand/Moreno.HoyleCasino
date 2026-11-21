// FUN_00579e80  00579e80

void FUN_00579e80(void)

{
  bool bVar1;
  int *piVar2;
  char *_Source;
  
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 != 2) {
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 != 3) {
      bVar1 = false;
      goto LAB_00579ec9;
    }
  }
  bVar1 = true;
LAB_00579ec9:
  if (!bVar1) {
    FUN_005e9f20("shell->players[ 0 ]->IsHuman()","..\\Casino\\demoroom.cpp",0x92);
  }
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 != 0) {
    FUN_0063b0a0();
  }
  _Source = (char *)FUN_00520e60();
  strcpy(&DAT_00793470,_Source);
  return;
}

