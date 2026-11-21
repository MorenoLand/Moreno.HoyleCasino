// FUN_004842b0  004842b0

undefined4 __fastcall FUN_004842b0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0063aac0(param_1);
  if (*piVar1 == 0) {
    FUN_005e9f20("!IsEmpty()","c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h",0x57);
  }
  iVar2 = FUN_0063aac0(param_1);
  return *(undefined4 *)(iVar2 + 0x54);
}

