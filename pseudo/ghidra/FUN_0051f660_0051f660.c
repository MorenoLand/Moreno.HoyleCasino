// FUN_0051f660  0051f660

int __thiscall FUN_0051f660(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    cVar1 = FUN_00520770(param_2,local_c,param_1);
    if (cVar1 != '\0') {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

