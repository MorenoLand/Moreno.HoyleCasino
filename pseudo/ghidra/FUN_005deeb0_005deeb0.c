// FUN_005deeb0  005deeb0

undefined4 __thiscall FUN_005deeb0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x16c))();
  if (param_2 < iVar1) {
    uVar2 = *(undefined4 *)(&DAT_0075d7e8 + param_2 * 4);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\casinoshell.cpp",0x449);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

