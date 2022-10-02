# DZ60 60% Mechanical Keyboard PCB

![DZ60](https://cdn.shopify.com/s/files/1/1473/3902/products/c_1.jpg)

## A Customizable 60% Mechanical Keyboard PCB

![A Customizable 60% Mechanical Keyboard PCB](https://cdn.shopify.com/s/files/1/1473/3902/files/1_03_abb48769-9486-44bd-a761-7cd39d7e1bda.jpg)

* Keyboard Maintainer: QMK Community
* Hardware Supported: DZ60 60% Mechanical Keyboard PCB
* Hardware Availability: [KBDfans](https://kbdfans.com/collections/60/products/dz60-60-pcb)

Make example for this keyboard (after setting up your build environment):

    make dz60:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## This repository

This repository holds a fake new keyboard with only custom changes. It requires needs to be cloned in the "keyboard" directory of QMK in order to be usable.

This config is suitable for a V2 board, like the DZ60 V2 Flex cut.

To set this keyboard and its keymap as default, use the following:

    ```bash
    qmk config compile.keyboard=dz60_gsegt
    qmk config compile.keymap=default
    ```

To set the default number of threads to use for compiling, use teh following:
Make sure you adaote the number to the number  of threads of your computer.

    ```bash
    qmk config compile.parallel=12
    ```

Alternatively, you can compile the keyboard and its keymap with the following:

    ```bash
    qmk compile -kb dz60_gsegt -km default -j 12
    ```
