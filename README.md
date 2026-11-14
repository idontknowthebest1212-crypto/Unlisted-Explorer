# Unlisted Explorer

Starter project for an iOS Geode mod targeting Geometry Dash 2.2081.

## Current status

This is a starter build only. It adds an Unlisted Explorer button to the main menu and displays an information popup.

Creator lookup, unlisted-level browsing, and forcing a profile Comments button to appear are **not implemented yet**.

The eventual mod can only display data that Geometry Dash's services make available. It cannot reveal private, deleted, or server-hidden content that the server does not return.

## Build

The GitHub Actions workflow in `.github/workflows/multi-platform.yml` attempts builds for supported platforms, including iOS.

After a successful run, open the workflow run's **Artifacts** section and download `Build Output`.
