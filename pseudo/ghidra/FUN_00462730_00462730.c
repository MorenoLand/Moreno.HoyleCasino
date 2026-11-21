// FUN_00462730  00462730

undefined4 __thiscall FUN_00462730(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  cVar1 = (**(code **)(*param_1 + 0xb0))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0xc4))(&local_c,param_3,1);
    if (param_3 == 1) {
      *(undefined1 *)(DAT_00790738 + param_2 + 0xf4) = 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

