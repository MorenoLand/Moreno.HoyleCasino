// FUN_00639ef0  00639ef0

undefined1 __thiscall FUN_00639ef0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0063aac0(param_1);
  if (*piVar1 == 0) {
    FUN_005e9f20("!IsEmpty()","c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h",0x80);
  }
  iVar2 = FUN_0063aac0(param_1);
  return *(undefined1 *)(iVar2 + 0x268 + param_2);
}

