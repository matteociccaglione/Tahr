#!/bin/bash

# Define MIME type and file extension
MIME_TYPE="application/x-tahr"
EXTENSION="tahr"
ICON_NAME="tahr"

# Create a MIME package description
mkdir -p ~/.local/share/mime/packages
cat > ~/.local/share/mime/packages/x-tahr.xml <<EOF
<?xml version="1.0" encoding="UTF-8"?>
<mime-info xmlns="http://www.freedesktop.org/standards/shared-mime-info">
  <mime-type type="$MIME_TYPE">
    <comment>Tahr Attribute Grammar File</comment>
    <glob pattern="*.$EXTENSION"/>
    <icon name="$ICON_NAME"/>
  </mime-type>
</mime-info>
EOF

# Update MIME database
update-mime-database ~/.local/share/mime

# Set icon manually for DEs (if necessary)
mkdir -p ~/.local/share/icons/hicolor/48x48/mimetypes
cp tahr.png ~/.local/share/icons/hicolor/48x48/mimetypes/application-x-tahr.png

# Update icon cache
update-icon-caches ~/.local/share/icons/hicolor

# Tell xdg-mime about the new association
#xdg-mime default your-default-tahr-handler.desktop $MIME_TYPE

echo "✅ .tahr extension registered with MIME type $MIME_TYPE and icon set to $ICON_NAME.png"

