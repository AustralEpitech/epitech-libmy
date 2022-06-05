// this is only a draft, do not use it as is

typedef struct entity_s {
    char name[256];
    union {
        sfTexture *texture;
        sfFont *font;
    };
    union {
        sfSprite *sprite;
        sfText *text;
    };
    sfTime animation_duration;
    sfTime elapsed_time;
    struct animation {
        sfIntRect rect;
        struct animation *next;
    } *animation;
    void *(*on_create)();
    void *(*on_update)();
} entity_t;
