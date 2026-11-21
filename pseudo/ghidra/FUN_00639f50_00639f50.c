// FUN_00639f50  00639f50

undefined4 __fastcall FUN_00639f50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0063aac0(param_1);
  if (*piVar1 == 0) {
    FUN_005e9f20("!IsEmpty()","c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h",0x84);
  }
  iVar2 = FUN_0063aac0(param_1);
  return *(undefined4 *)(iVar2 + 0x264);
}

