// FUN_00627620  00627620

undefined1 __thiscall FUN_00627620(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x4b) != param_2) {
    *(char *)((int)param_1 + 0x4b) = param_2;
    (**(code **)(*param_1 + 0xac))();
  }
  return *(undefined1 *)((int)param_1 + 0x4b);
}

