// FUN_005def90  005def90

undefined4 __thiscall FUN_005def90(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x17c))();
  if (param_2 < iVar1) {
    uVar2 = *(undefined4 *)(&DAT_007947e8 + param_2 * 4);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\casinoshell.cpp",0x485);
    uVar2 = 0;
  }
  return uVar2;
}

