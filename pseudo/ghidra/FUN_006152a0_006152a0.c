// FUN_006152a0  006152a0

undefined1 __thiscall FUN_006152a0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[0x1b] <= param_2) &&
     (iVar1 = (**(code **)(*param_1 + 0xbc))(), param_2 < iVar1 + param_1[0x1b])) {
    return 1;
  }
  return 0;
}

