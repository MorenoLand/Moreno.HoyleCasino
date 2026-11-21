// FUN_00568060  00568060

void __thiscall FUN_00568060(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*DAT_007947e0 + 0xe0))(0x11,param_1);
  if (piVar1 == (int *)0x0) {
    FUN_005e9f20("poRoomInterface","..\\Casino\\vpmroominterface.cpp",0x138);
  }
  (**(code **)(*piVar1 + 100))(param_2);
  return;
}

